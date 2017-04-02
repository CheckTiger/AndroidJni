package cn.sxh.androidjni;

/**
 * @auther snowTiger
 * @mail SnowTigerSong@gmail.com
 * @time 2017/4/2 22:58
 */

public class JNI {

    static {
        System.loadLibrary("JniTest");
    }

    public  native String sayHello();
}
