class Stick{
    int st;
    public Stick(int x){
        st=x;
    }
    public int getLength(){
        return st;
    }
    public void combineStick(Stick x){
        if(x.getLength()==0){
            System.out.println("Length of the stick cannot be zero");
        }
        else{
            this.st+=x.getLength();
        }
    }
    public void breakStick(){
        if(this.st%2==0){
            this.st/=2;
        }
        else{
            System.out.println("Length of the stick cannot be odd");
        }
    }
}