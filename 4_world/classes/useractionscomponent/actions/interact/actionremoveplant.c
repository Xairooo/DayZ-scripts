class ActionRemovePlant: ActionInteractBase
{
	PlantBase m_Plant;
	
	void ActionRemovePlant()
	{
	}

	override string GetText()
	{
		return "#remove_plant";
	}
	
	override typename GetInputType()
	{
		return ContinuousInteractActionInput;
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTCursor(UAMaxDistances.SMALL);
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		GardenBase garden_base;
		if ( Class.CastTo(garden_base, target.GetObject()))
		{
			Slot slot;
			
			array<string> selections = new array<string>;
			garden_base.GetActionComponentNameList(target.GetComponentIndex(), selections);
			string selection;

			for (int s = 0; s < selections.Count(); s++)
			{
				selection = selections[s];
				slot = garden_base.GetSlotBySelection( selection );
				if (slot)
					break;
			}
			
			if ( slot && slot.GetPlant() )
			{
				m_Plant = PlantBase.Cast(slot.GetPlant());
				if ( m_Plant.IsGrowing()  ||  m_Plant.IsDry()  ||  !m_Plant.HasCrops() || m_Plant.IsSpoiled())
				{
					return true;
				}
			}
		}
		return false;
		/*Object targetObject = target.GetObject();
		if ( targetObject != NULL && targetObject.IsInherited(PlantBase) )
		{
			PlantBase plant = PlantBase.Cast( targetObject );
			
			if ( plant.IsGrowing()  ||  plant.IsDry()  ||  !plant.HasCrops() || plant.IsSpoiled())
			{
				return true;
			}
		}
		
		return false;*/
	}

	override void OnExecuteServer( ActionData action_data )
	{
		if ( m_Plant )
		{
			m_Plant.RemovePlant();
		}
		/*Object targetObject = action_data.m_Target.GetObject();
		if ( targetObject != NULL && targetObject.IsInherited(PlantBase) )
		{
			PlantBase plant = PlantBase.Cast( targetObject );
			plant.RemovePlant();
		}*/
	}
};