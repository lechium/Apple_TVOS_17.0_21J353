//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIWeakReference : NSObject
{
    id _object;	// 8 = 0x8
}

+ (id)weakReferenceWrappingObject:(id)arg1;	// IMP=0x00100000012712d9
- (void).cxx_destruct;	// IMP=0x0000000001271356
@property(nonatomic) __weak id object; // @synthesize object=_object;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000127128a
- (id)initWithObject:(id)arg1;	// IMP=0x0000000001271226

@end

