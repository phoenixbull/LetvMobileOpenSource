

1. 为了解决JS加载不出本地不带后缀图片的问题，修改函数cachedFileNameForKey, 增加代码如下：

    NSString *filenameTemp = filename;
    if (key != NULL && key != nil && ![key isEqualToString:@""]) {

        NSString *pathExctension = [key pathExtension];

        if (pathExctension != nil && ![pathExctension isEqualToString:@""]) {
            filenameTemp = [NSString stringWithFormat:@"%@.%@", filename, pathExctension];
        }
    }


2. 为了可以同步清理SDWebImage的图片，增加方法：clearDiskSynchronization。
    
