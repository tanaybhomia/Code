<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="WebForm1.aspx.cs" Inherits="WebApplication7.WebForm1" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
	<title></title>
</head>
<body>
	<form id="form1" runat="server">
    	<div>
        	<asp:SiteMapDataSource ID="SiteMapDataSource1" runat="server" />
    	</div>
    	<asp:Menu ID="Menu1" runat="server" DataSourceID="SiteMapDataSource1">
    	</asp:Menu>
	</form>
</body>
</html>
