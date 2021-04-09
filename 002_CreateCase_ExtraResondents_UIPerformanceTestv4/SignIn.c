//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

SignIn()
{
	truclient_step("1", "Verify Sign in 's Visible Text contains Sign in", "snapshot=SignIn_1.inf");
	lr_end_transaction("002_001_ECM_LaunchHomePage",0);
	truclient_step("2", "Wait 3 seconds", "snapshot=SignIn_2.inf");
	truclient_step("3", "Sign in", "snapshot=SignIn_3.inf");
	{
		truclient_step("3.1", "Click on Email address textbox", "snapshot=SignIn_3.1.inf");
		truclient_step("3.2", "Type Users in Email address textbox", "snapshot=SignIn_3.2.inf");
		truclient_step("3.3", "Click on Password passwordbox", "snapshot=SignIn_3.3.inf");
		truclient_step("3.4", "Type ******** in Password passwordbox", "snapshot=SignIn_3.4.inf");
		lr_start_transaction("002_002_ECM_SignIn");
		truclient_step("3.5", "Click on Sign in button", "snapshot=SignIn_3.5.inf");
	}
	truclient_step("4", "Verify Case List 's Visible Text contains Case List", "snapshot=SignIn_4.inf");
	lr_end_transaction("002_002_ECM_SignIn",0);
	truclient_step("5", "Wait 3 seconds", "snapshot=SignIn_5.inf");

	return 0;
}
