//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

SelectCase()
{
	lr_start_transaction("005_004_ECM_SelectCase");
	truclient_step("1", "Click on 181300519/2021 link", "snapshot=SelectCase_1.inf");
	lr_end_transaction("005_004_ECM_SelectCase",0);
	truclient_step("2", "Wait 3 seconds", "snapshot=SelectCase_2.inf");

	return 0;
}
