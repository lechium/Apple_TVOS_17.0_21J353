//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCNJSValueTmpImp : NSObject
{
}

+ (id)valueWithTransform3D:(struct SCNMatrix4)arg1 inContext:(id)arg2;	// IMP=0x00800000002ca190
+ (id)valueWithVector3:(struct SCNVector3)arg1 inContext:(id)arg2;	// IMP=0x00800000002c9e03
+ (id)valueWithVector4:(struct SCNVector4)arg1 inContext:(id)arg2;	// IMP=0x00800000002c9c43
- (struct SCNMatrix4)toTransform3D;	// IMP=0x00000000002c9ef7
- (struct SCNVector3)toVector3;	// IMP=0x00000000002c9d65
- (struct SCNVector4)toVector4;	// IMP=0x00000000002c9b81

@end

