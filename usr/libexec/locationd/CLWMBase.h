//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLWMBase : NSObject
{
    double _privacyTimeOffset;	// 8 = 0x8
}

- (int)getSampleCount;	// IMP=0x0020000000f91b58
- (void)setWriter:(shared_ptr_da0ccc6f)arg1;	// IMP=0x0010000000f91b52
- (double)makeSafeCFAbsoluteTime:(double)arg1;	// IMP=0x0010000000f91b33
- (void)setPrivacyTimeOffset:(double)arg1;	// IMP=0x0010000000f91b28
- (id)metadata;	// IMP=0x0010000000f91b20
- (void)dealloc;	// IMP=0x0010000000f91af1
- (void)setupListener;	// IMP=0x0010000000f91aeb
- (void)teardownListeners;	// IMP=0x0010000000f91ae5
- (id)init;	// IMP=0x0010000000f91ab6

@end

