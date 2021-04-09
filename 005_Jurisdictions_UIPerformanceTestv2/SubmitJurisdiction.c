//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

SubmitJurisdiction()
{
	lr_start_transaction("005_008_ECM_SubmitNewJurisdiction");
	truclient_step("1", "Click on Submit button", "snapshot=SubmitJurisdiction_1.inf");
	lr_end_transaction("005_008_ECM_SubmitNewJurisdiction",0);
	truclient_step("2", "Wait 3 seconds", "snapshot=SubmitJurisdiction_2.inf");
	lr_start_transaction("005_009_ECM_JurisdictionTab");
	truclient_step("3", "Click on Jurisdictions tab", "snapshot=SubmitJurisdiction_3.inf");
	lr_end_transaction("005_009_ECM_JurisdictionTab",0);
	truclient_step("4", "Wait 3 seconds", "snapshot=SubmitJurisdiction_4.inf");

	return 0;
}
