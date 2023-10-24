//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCMockIDSDatagramChannel;

__attribute__((visibility("hidden")))
@interface VCMockIDSDatagramChannelController
{
    VCMockIDSDatagramChannel *_datagramChannel;	// 88 = 0x58
}

+ (id)sharedInstance;	// IMP=0x00600000003663c9
- (void)setReadyToReadBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000003666f8
- (void)setWriteDatagramBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000003666aa
- (void)setWriteDatagramsBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000036665c
- (void)invalidate;	// IMP=0x0000000000366613
- (void)dealloc;	// IMP=0x00000000003665ae
- (id)datagramChannelRequiresOptions:(_Bool)arg1 dataPath:(int)arg2;	// IMP=0x0000000000366422
- (id)datagramChannelRequiresOptions:(_Bool)arg1;	// IMP=0x000000000036640e

@end
