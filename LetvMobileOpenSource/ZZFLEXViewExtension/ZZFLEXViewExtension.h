//
//  ZZFLEXViewExtension.h
//  Pods
//
//  Created by libokun on 2020/1/16.
//

#ifndef ZZFLEXViewExtension_h
#define ZZFLEXViewExtension_h

#import "UIView+ZZFLEX.h"

#import "UIView+ZZSeparator.h"
#import "UIView+ZZCornor.h"

#define LETV_DECLARE_ZZFLEX_VIEW(klass) \
@class ZZ##klass##ChainModel; \
@interface ZZ##klass##ChainModel : ZZBaseViewChainModel<ZZ##klass##ChainModel *> \
@end \
ZZFLEX_EX_INTERFACE(klass, ZZ##klass##ChainModel)

#define LETV_IMPLEMENT_ZZFLEX_VIEW(klass) \
@implementation ZZ##klass##ChainModel \
@end \
ZZFLEX_EX_IMPLEMENTATION(klass, ZZ##klass##ChainModel)

#endif /* ZZFLEXViewExtension_h */
