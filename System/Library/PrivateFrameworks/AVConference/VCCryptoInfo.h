//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCCryptoInfo : NSObject
{
    struct tagSRTPINFO _SRTPInfo;	// 8 = 0x8
}

@property(readonly) struct tagSRTPINFO *state;
- (void)dealloc;	// IMP=0x0000000000085fe2
- (id)initWithSRTPInfo:(struct tagSRTPINFO *)arg1;	// IMP=0x0000000000085f6b

@end

