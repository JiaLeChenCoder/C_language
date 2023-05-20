namespace _1_9_StudentTeacherLogin_WinForms
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (rdostudent.Checked || rdotecher.Checked)//选择的是老师或者学生
            {
                string name = txtname.Text.Trim();
                string pwd = txtpwd.Text;
                if (rdostudent.Checked)
                {
                    if (name == "hhh" && pwd == "520")
                    {
                        //MessageBox.Show("登陆成功");
                        Form2 frm2 = new Form2();


                        frm2.Show();
                        //this.Close();
                    }
                    else
                    {
                        MessageBox.Show("登陆失败");
                        txtname.Clear();
                        txtpwd.Clear();
                        txtname.Focus();
                    }
                }
                else//选择的是老师
                {
                    if (name == "hhh" && pwd == "520")
                    {
                        MessageBox.Show("请选择“女朋友”");
                    }
                    else
                    {
                        MessageBox.Show("登陆失败");
                        txtname.Clear();
                        txtpwd.Clear();
                        txtname.Focus();
                    }
                }
            }
            else//都没选中 
            {
                MessageBox.Show("请选择登陆身份");
            }
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void rdostudent_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void label2_Click(object sender, EventArgs e)
        {

        }
    }
}