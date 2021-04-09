//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

SignIn()
{
	truclient_step("1", "Sign in", "snapshot=SignIn_1.inf");
	{
		truclient_step("1.1", "Click on Email address textbox", "snapshot=SignIn_1.1.inf");
		truclient_step("1.2", "Type ccdloadtest4501@gmail.com in Email address textbox", "snapshot=SignIn_1.2.inf");
		truclient_step("1.3", "Click on Email address textbox", "snapshot=SignIn_1.3.inf");
		truclient_step("1.4", "Click on Password passwordbox", "snapshot=SignIn_1.4.inf");
		truclient_step("1.5", "Type ********** in Password passwordbox", "snapshot=SignIn_1.5.inf");
		truclient_step("1.6", "Click on Sign in button", "snapshot=SignIn_1.6.inf");
	}

	return 0;
}
