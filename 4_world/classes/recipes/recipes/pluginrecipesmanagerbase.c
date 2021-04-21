enum Ingredient
{
	FIRST = 1,
	SECOND = 2,
	BOTH = 3;
}

class PluginRecipesManagerBase extends PluginBase
{	
	protected void RegisterRecipe(RecipeBase recipe);
	protected void UnregisterRecipe(string clasname);
	
	//! Please do not delete commented recipes, they are usually commented out for a reason
	void RegisterRecipies()
	{
		RegisterRecipe(new CraftTorch);
		RegisterRecipe(new CraftFireplace);
		RegisterRecipe(new CraftLongTorch);
		//RegisterRecipe(new SharpenStick);
		RegisterRecipe(new SharpenLongStick);
		RegisterRecipe(new PokeHolesBarrel);
		RegisterRecipe(new CraftBaseBallBatNailed);
		RegisterRecipe(new CraftGhillieHood);
		RegisterRecipe(new DeCraftGhillieHood);
		RegisterRecipe(new CraftGhillieAttachment);
		RegisterRecipe(new DeCraftGhillieAttachment);
		RegisterRecipe(new CraftGhillieBushrag);
		RegisterRecipe(new DeCraftGhillieBushrag);
		RegisterRecipe(new CraftGhillieTop);
		RegisterRecipe(new DeCraftGhillieTop);
		RegisterRecipe(new CraftGhillieSuit);
		RegisterRecipe(new DeCraftGhillieSuit);
		RegisterRecipe(new CraftStoneKnife);
		RegisterRecipe(new CraftBait);
		RegisterRecipe(new CraftRagRope);
		RegisterRecipe(new CraftSuppressor);
		RegisterRecipe(new CleanWeapon);
		RegisterRecipe(new RepairWithTape);
		//RegisterRecipe(new CraftArrow);
		//RegisterRecipe(new CraftArrowBone);
		RegisterRecipe(new CraftBoneHook);
		RegisterRecipe(new CraftBurlapStrips);
		RegisterRecipe(new CraftLeatherCourierBag);
		RegisterRecipe(new CraftCourierBag);
		RegisterRecipe(new CraftImprovisedBag);
		RegisterRecipe(new CraftImprovisedLeatherBag);
		RegisterRecipe(new CraftLeatherSack);
		RegisterRecipe(new DeCraftLeatherCourierBag);
		RegisterRecipe(new DeCraftCourierBag);
		RegisterRecipe(new DeCraftImprovisedBag);
		RegisterRecipe(new DeCraftImprovisedLeatherBag);
		RegisterRecipe(new DeCraftLeatherSack);
		RegisterRecipe(new SplitLongWoodenStick);
		RegisterRecipe(new SplitFirewood);
		RegisterRecipe(new CraftSplint); // craft splint
		RegisterRecipe(new DeCraftSplint);
		RegisterRecipe(new CraftHandDrillKit);
		//RegisterRecipe(new CraftSpear);
		RegisterRecipe(new DeCraftHandDrillKit);
		//RegisterRecipe(new DeCraftSpear);
		RegisterRecipe(new PatchItem);
		RegisterRecipe(new CutOutZucchiniSeeds);
		RegisterRecipe(new CutOutPepperSeeds);
		RegisterRecipe(new CutOutPumpkinSeeds);
		RegisterRecipe(new CutOutTomatoSeeds);
		RegisterRecipe(new PrepareCarp);
		RegisterRecipe(new PrepareMackerel);
		RegisterRecipe(new OpenCan);
		RegisterRecipe(new CraftSalineBagIV);
		RegisterRecipe(new PurifyWater);
		RegisterRecipe(new CraftBloodBagIV);
		//RegisterRecipe(new CraftCamoNetShelter);
		RegisterRecipe(new DeCraftCamoNetShelter);
		RegisterRecipe(new FuelChainsaw);
		//RegisterRecipe(new CraftTripWire);
		//RegisterRecipe(new CraftRabbitSnare);
		RegisterRecipe(new DeCraftSnareTrap);
		RegisterRecipe(new DeCraftTripWire);
		RegisterRecipe(new DisinfectItem);
		RegisterRecipe(new FillSyringe);
		RegisterRecipe(new BloodTest);
		RegisterRecipe(new SharpenMelee);
		RegisterRecipe(new RepairEpoxy);
		RegisterRecipe(new CraftArmbandRaincoat);
		RegisterRecipe(new RepairElectric);
		RegisterRecipe(new RefuelTorch);
		RegisterRecipe(new ExtinguishTorch);
		RegisterRecipe(new AttachHolsterPouch);
		RegisterRecipe(new AttachPouchesHolster);
		//RegisterRecipe(new CraftGorkaHelmetComplete);
		RegisterRecipe(new SawoffShotgunIzh43);
		RegisterRecipe(new SawoffMosin);
		//RegisterRecipe(new SawoffMosinPainted);
		RegisterRecipe(new SawOffIzh18);
		RegisterRecipe(new CleanRags);
		RegisterRecipe(new CraftArmbandRag);
		RegisterRecipe(new CraftRag);
		RegisterRecipe(new CraftGutsRope);
		RegisterRecipe(new CraftBoneBait);
		RegisterRecipe(new SplitStones);
		RegisterRecipe(new UpgradeTorchWithLard);
		RegisterRecipe(new UpgradeTorchWithLiquidFuel);
		RegisterRecipe(new CraftFenceKit);
		RegisterRecipe(new CraftWatchtowerKit);
		RegisterRecipe(new CraftWoodenPlank);
		RegisterRecipe(new SawWoodenLog);
		RegisterRecipe(new CraftWoodenCrate);
		RegisterRecipe(new CraftFishingRod);
		RegisterRecipe(new DeCraftFishingRod);
		RegisterRecipe(new DeCraftWoodenCrate);
		RegisterRecipe(new CraftTerritoryFlagKit);
		RegisterRecipe(new CraftTannedLeather);
		RegisterRecipe(new CraftShelterKit);
		RegisterRecipe(new CraftTruck01DoubleWheel);
		RegisterRecipe(new DeCraftTruck01DoubleWheel);
		
		//"paint" recipes
		/*RegisterRecipe(new PaintFirefighterAxe);
		RegisterRecipe(new PaintGhillieHoodGreen);
		RegisterRecipe(new PaintGhillieHoodBlack);
		RegisterRecipe(new PaintGhillieHoodGreenMossy);
		RegisterRecipe(new PaintGhillieAttBlack);
		RegisterRecipe(new PaintGhillieAttGreen);
		RegisterRecipe(new PaintGhillieAttGreenMossy);
		RegisterRecipe(new PaintGhillieTopGreen);
		RegisterRecipe(new PaintGhillieTopBlack);
		RegisterRecipe(new PaintGhillieTopGreenMossy);
		RegisterRecipe(new PaintGhillieBushragGreen);
		RegisterRecipe(new PaintGhillieBushragBlack);
		RegisterRecipe(new PaintGhillieBushragGreenMossy);
		RegisterRecipe(new PaintGhillieSuitGreen);
		RegisterRecipe(new PaintGhillieSuitBlack);
		RegisterRecipe(new PaintGhillieSuitGreenMossy);
		RegisterRecipe(new PaintSKS);
		RegisterRecipe(new PaintMosin);
		RegisterRecipe(new PaintMosinCamoBlack);
		RegisterRecipe(new PaintSawedoffMosin);
		RegisterRecipe(new PaintSawedoffMosinCamoBlack);
		RegisterRecipe(new PaintM4A1);
		RegisterRecipe(new PaintRuger1022);
		RegisterRecipe(new PaintB95);
		RegisterRecipe(new PaintDarkMotohelmet);
		RegisterRecipe(new PaintMotohelmet);
		RegisterRecipe(new PaintCz527);
		RegisterRecipe(new PaintCz527CamoBlack);
		RegisterRecipe(new PaintAK74);
		RegisterRecipe(new PaintAK101);
		RegisterRecipe(new PaintAKS74U);
		RegisterRecipe(new PaintBallisticHelmet);
		RegisterRecipe(new PaintZSh3PilotHelmet);
		RegisterRecipe(new PaintGorkaHelmet);
		RegisterRecipe(new PaintGorkaHelmetComplete);
		RegisterRecipe(new PaintCMAG10);
		RegisterRecipe(new PaintCMAG20);
		RegisterRecipe(new PaintCMAG30);
		RegisterRecipe(new PaintCMAG40);
		RegisterRecipe(new PaintAK7430Mag);
		RegisterRecipe(new PaintAK10130Mag);
		RegisterRecipe(new PaintAKMDrumMag);
		RegisterRecipe(new PaintAKMPalm30Mag);
		RegisterRecipe(new PaintM4MPBttstck);
		RegisterRecipe(new PaintM4MPHndgrd);
		RegisterRecipe(new PaintM4OEBttstck);
		RegisterRecipe(new PaintM4CQBBttstck);
		RegisterRecipe(new PaintM4PlasticHndgrd);
		RegisterRecipe(new PaintM4RISHndgrd);
		RegisterRecipe(new PaintAKFoldingBttstck);
		RegisterRecipe(new PaintAKWoodBttstckBlack);
		RegisterRecipe(new PaintAKWoodBttstckCamo);
		RegisterRecipe(new PaintAK74HndgrdBlack);
		RegisterRecipe(new PaintAK74HndgrdCamo);
		RegisterRecipe(new PaintAKRailHndgrd);
		RegisterRecipe(new PaintAK74WoodBttstckBlack);
		RegisterRecipe(new PaintAK74WoodBttstckCamo);
		RegisterRecipe(new PaintAKS74UBttstck);
		RegisterRecipe(new PaintAKPlasticBttstck);
		RegisterRecipe(new PaintMosinCamoGreen);
		RegisterRecipe(new PaintSawedoffMosinCamoGreen);
		RegisterRecipe(new PaintCz527CamoGreen);*/
		
	}
};