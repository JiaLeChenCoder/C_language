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
            if (rdostudent.Checked || rdotecher.Checked)//ѡ�������ʦ����ѧ��
            {
                string name = txtname.Text.Trim();
                string pwd = txtpwd.Text;
                if (rdostudent.Checked)
                {
                    if (name == "hhh" && pwd == "520")
                    {
                        //MessageBox.Show("��½�ɹ�");
                        Form2 frm2 = new Form2();


                        frm2.Show();
                        //this.Close();
                    }
                    else
                    {
                        MessageBox.Show("��½ʧ��");
                        txtname.Clear();
                        txtpwd.Clear();
                        txtname.Focus();
                    }
                }
                else//ѡ�������ʦ
                {
                    if (name == "hhh" && pwd == "520")
                    {
                        MessageBox.Show("��ѡ��Ů���ѡ�");
                    }
                    else
                    {
                        MessageBox.Show("��½ʧ��");
                        txtname.Clear();
                        txtpwd.Clear();
                        txtname.Focus();
                    }
                }
            }
            else//��ûѡ�� 
            {
                MessageBox.Show("��ѡ���½���");
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