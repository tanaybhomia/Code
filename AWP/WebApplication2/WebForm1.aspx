<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="WebForm1.aspx.cs" Inherits="WebApplication2.WebForm1" %>
 
<!DOCTYPE html>
 
<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
        	<title></title>
</head>
<body>
        	<form id="form1" runat="server">
	    	<div>
    		<asp:Calendar ID="Calendar1" runat="server" BackColor="YellowGreen" OnDayRender="Calendar1_DayRender" OnSelectionChanged="Calendar1SelectionChanged">
    		</asp:Calendar>
    		<br />
    		<br />
    		<asp:Label ID="SD" runat="server" Text="Your Selected Date:"></asp:Label>
    		&nbsp;<asp:Label ID="Label1" runat="server" Text="Label"></asp:Label>
    		<br />
    		<asp:Label ID="TD" runat="server" Text="Today's Date:"></asp:Label>
    		&nbsp;<asp:Label ID="Label2" runat="server" Text="Label"></asp:Label>
    		<br />
    		<asp:Label ID="GVS" runat="server" Text="Ganpati vacation start:"></asp:Label>
    		&nbsp;<asp:Label ID="Label3" runat="server" Text="Label"></asp:Label>
    		<br />
    		<asp:Label ID="DRGV" runat="server" Text="Days remaining for Ganpati vacation: "></asp:Label>
    		&nbsp;<asp:Label ID="Label4" runat="server" Text="Label"></asp:Label>
    		<br />
    		<asp:Label ID="DNY" runat="server" Text="Days remaining for new year:"></asp:Label>
    		&nbsp;<asp:Label ID="Label5" runat="server" Text="Label"></asp:Label>
    		<br />
    		<br />
    		<asp:Button ID="Button1" runat="server" Text="Result" OnClick="Button1_Click" />
    		&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
    		<asp:Button ID="Button2" runat="server" Text="Reset" OnClick="Button2_Click" />
    		<br />
    		<br />
    		<br />
    		<br />
    		<br />
    		<br />
    		<br />
    		<br />
    		<br />
    		<br />
    		<br />
    		<br />
	    	</div>
        	</form>
</body>
</html>
