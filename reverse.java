package practicalques;

public class reverse {

	public static void main(String[] args) {
		String str="my.world.is.great.thanks.to.everyone";
		String temp="";
		int count=0;
		for(int i=str.length()-1;i>=0;i--)
		{
		count++;	
			if(str.charAt(i)=='.')
			{
				temp+=str.substring(i+1, i+count);
				temp+=".";
				count=0;
			}
			if(i==0)
			{
				temp+=str.substring(i, i+count);
				temp+=" ";
				count=0;
			}
		}
		System.out.println(temp);
	}

}
