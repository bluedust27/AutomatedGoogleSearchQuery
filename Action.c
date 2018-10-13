//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Navigate to TC.getParam('googleDomain')", "snapshot=Action_1.inf");
	truclient_step("3", "Search a query", "snapshot=Action_3.inf");
	{
		truclient_step("3.1", "Click on Fittex combobox", "snapshot=Action_3.1.inf");
		truclient_step("3.2", "Type searchQuery in Fittex combobox", "snapshot=Action_3.2.inf");
		truclient_step("3.3", "Press key Enter on Fittex combobox", "snapshot=Action_3.3.inf");
	}
	truclient_step("9", "For ( var i = 0 ; i < TC.getParam('noOfPages') ; i++ )", "snapshot=Action_9.inf");
	{
		truclient_step("9.1", "Evaluate JavaScript var links = document.get...'))   flag=1; }  on Rizultati ghat tfittxija... main", "snapshot=Action_9.1.inf");
		truclient_step("9.2", "If ( flag=='0' )", "snapshot=Action_9.2.inf");
		{
			truclient_step("9.2.1", "Click on Li jmiss link", "snapshot=Action_9.2.1.inf");
		}
	}

	return 0;
}
