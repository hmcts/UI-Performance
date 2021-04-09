//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

SelectJudgement()
{
	truclient_step("1", "Select Judgment from Next step listbox", "snapshot=SelectJudgement_1.inf");
	truclient_step("2", "Click on Go button", "snapshot=SelectJudgement_2.inf");

	return 0;
}
