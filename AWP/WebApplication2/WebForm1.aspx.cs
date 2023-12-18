using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace WebApplication2
{
    public partial class WebForm1 : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
        }
        protected void Button1_Click(object sender, EventArgs e)
        {
            Calendar1.Caption = "TYIT";
            Calendar1.FirstDayOfWeek = FirstDayOfWeek.Thursday;
            Calendar1.NextPrevFormat = NextPrevFormat.ShortMonth;
            Calendar1.TitleFormat = TitleFormat.Month;
            Label2.Text = "Today's Date is" + Calendar1.TodaysDate.ToShortDateString();
            Label3.Text = "Ganpati vacation starts on 19/09/2023";
            TimeSpan t = new DateTime(2023, 09, 19) - DateTime.Now;
            Label4.Text = "Days remaining for Ganpati vacation is " + t.ToString();
            TimeSpan t1 = new DateTime(2023, 12, 31) - DateTime.Now;
            Label5.Text = "Days left for New Year " + t1.ToString();

        }
        protected void Calendar1SelectionChanged(object sender, EventArgs e)
        {
            Label1.Text = "You have selected" + Calendar1.SelectedDate.Date.ToString();
        }
        protected void Calendar1_DayRender(object sender, DayRenderEventArgs e)
        {
            if (e.Day.Date.Day == 5 && e.Day.Date.Month == 9)
            {
                e.Cell.BackColor = System.Drawing.Color.Red;
                Label l = new Label();
                l.Text = "Teachers Day";
                e.Cell.Controls.Add(l);
            }
        }
        protected void Button2_Click(object sender, EventArgs e)
        {
            Label1.Text = "";
            Label2.Text = "";
            Label3.Text = "";
            Label4.Text = "";
            Label5.Text = "";
            Calendar1.SelectedDates.Clear();
        }
    }
}
