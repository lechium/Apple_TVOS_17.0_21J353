//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IMInvocationTrampoline : NSObject
{
    id _target;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000b651
@property(retain) id target; // @synthesize target=_target;
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000000000b5c5
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000000b549
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000000000b4b9
- (void)performInvocation:(id)arg1;	// IMP=0x000000000000b443
- (void)dealloc;	// IMP=0x000000000000b400

@end
