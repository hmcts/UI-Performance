//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

SearchCase()
{
	truclient_step("1", "Select Leeds - Singles from Case type listbox", "snapshot=SearchCase_1.inf");
	truclient_step("2", "Click on Case Number textbox", "snapshot=SearchCase_2.inf");
	truclient_step("3", "Type 20210209 in Case Number textbox", "snapshot=SearchCase_3.inf");
	truclient_step("4", "Click on Apply button", "snapshot=SearchCase_4.inf");

	return 0;
}
