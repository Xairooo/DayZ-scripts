class Sickle extends ToolBase
{
	void Sickle()
	{
	}

	override bool IsMeleeFinisher()
	{
		return true;
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionUnrestrainTarget);
		AddAction(ActionMineBush);
		AddAction(ActionSkinning);
		AddAction(ActionMineTreeBark);
		AddAction(ActionDigWorms);
		AddAction(ActionShaveTarget);
		AddAction(ActionShave);
	}
}