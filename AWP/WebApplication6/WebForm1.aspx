<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="WebForm1.aspx.cs" Inherits="WebApplication6.WebForm1" %>
  <%@Register Src="footer.ascx" TagPrefix="TYIT" TagName="footer1" %>
<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
	<title></title>
</head>
 
<body>
	<form id="form1" runat="server">
    	<div>
   	 
    	<asp:Label ID="Label1" runat="server" Text="Welcome to ASP.NET practicals"></asp:Label>
&nbsp;
   
        	</div>
    	<div>
        	<TYIT:footer1 Id="w1" runat="server"/>
        	</div>
	</form>
</body>
</html>
