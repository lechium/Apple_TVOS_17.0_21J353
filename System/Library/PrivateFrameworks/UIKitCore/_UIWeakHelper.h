//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIWeakHelper : NSObject
{
    CDUnknownBlockType _deallocationBlock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000001271216
@property(copy, nonatomic) CDUnknownBlockType deallocationBlock; // @synthesize deallocationBlock=_deallocationBlock;
- (void)dealloc;	// IMP=0x00000000012711a2
- (void)invalidate;	// IMP=0x0000000001271188
- (id)initWithDeallocationBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000001271120

@end

