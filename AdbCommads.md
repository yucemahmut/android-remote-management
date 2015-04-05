Android Debug Bridge version 1.0.25

> -d                            - directs command to the only connected USB device
> > returns an error if more than one USB device is present.

> -e                            - directs command to the only running emulator.
> > returns an error if more than one emulator is running.

> -s <serial number>            - directs command to the USB device or emulator with
> > the given serial number. Overrides ANDROID\_SERIAL
> > envivornment variable.

> -p <product name or path>     - simple product name like 'sooner', or
> > a relative/absolute path to a product
> > out directory like 'out/target/product/sooner'.
> > If -p is not specified, the ANDROID\_PRODUCT\_OUT
> > environment variable is used, which must
> > be an absolute path.

> devices                       - list all connected devices
> connect 

&lt;host&gt;

:

&lt;port&gt;

         - connect to a device via TCP/IP
> disconnect 

&lt;host&gt;

:

&lt;port&gt;

      - disconnect from a TCP/IP device

device commands:
> adb push 

&lt;local&gt;

 

&lt;remote&gt;

    - copy file/dir to device
> adb pull 

&lt;remote&gt;

 

&lt;local&gt;

    - copy file/dir from device
> adb sync [&lt;directory&gt; ](.md)     - copy host->device only if changed
> > (see 'adb help all')

> adb shell                    - run remote shell interactively
> adb shell 

&lt;command&gt;

          - run remote shell command
> adb emu 

&lt;command&gt;

            - run emulator console command
> adb logcat [&lt;filter-spec&gt; ](.md) - View device log
> adb forward 

&lt;local&gt;

 

&lt;remote&gt;

 - forward socket connections
> > forward specs are one of: