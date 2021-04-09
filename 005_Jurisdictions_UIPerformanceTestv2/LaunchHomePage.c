//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

LaunchHomePage()
{
	truclient_step("1", "Navigate to TC.getParam('URL')", "snapshot=LaunchHomePage_1.inf");
	truclient_step("2", "Wait 3 seconds", "snapshot=LaunchHomePage_2.inf");

	return 0;
}
