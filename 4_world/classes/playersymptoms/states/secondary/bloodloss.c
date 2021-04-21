class BloodLoss extends SymptomBase
{
	Material m_MatGauss;
	const int BLUR_DURATION = 3000;
	float m_BloodSet;
	//this is just for the Symptom parameters set-up and is called even if the Symptom doesn't execute, don't put any gameplay code in here
	override void OnInit()
	{
		m_SymptomType = SymptomTypes.SECONDARY;
		m_Priority = 0;
		m_ID = SymptomIDs.SYMPTOM_BLOODLOSS;
		m_DestroyOnAnimFinish = true;
		m_IsPersistent = false;
		m_SyncToClient = true;
	}
	
	//!gets called every frame
	override void OnUpdateServer(PlayerBase player, float deltatime)
	{
	}

	override void OnUpdateClient(PlayerBase player, float deltatime)
	{
		if( player.GetTransferValues() && player.GetTransferValues().GetBlood() != m_BloodSet ) 
		{
				m_BloodSet = player.GetTransferValues().GetBlood();
				PPEffects.SetBloodSaturation(m_BloodSet);
		}
		
		
	}
	
	//!gets called once on an Symptom which is being activated
	override void OnGetActivatedServer(PlayerBase player)
	{
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetActivated");
	}

	override void OnGetActivatedClient(PlayerBase player)
	{
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetActivated");
	}

	override void OnGetDeactivatedServer(PlayerBase player)
	{
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetDeactivated");
	}
	
	//!only gets called once on an active Symptom that is being deactivated
	override void OnGetDeactivatedClient(PlayerBase player)
	{
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetDeactivated");
	}
}
