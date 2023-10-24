//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

__attribute__((visibility("hidden")))
@interface HMDSetupEndPointRead
{
    unsigned long long _responseStatus;	// 40 = 0x28
    NSNumber *_videoSSRC;	// 48 = 0x30
    NSNumber *_audioSSRC;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000734dd
- (void).cxx_destruct;	// IMP=0x00000000000734ac
@property(readonly, copy, nonatomic) NSNumber *audioSSRC; // @synthesize audioSSRC=_audioSSRC;
@property(readonly, copy, nonatomic) NSNumber *videoSSRC; // @synthesize videoSSRC=_videoSSRC;
@property(readonly, nonatomic) unsigned long long responseStatus; // @synthesize responseStatus=_responseStatus;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000073382
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007318e
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x0000000000073046
- (_Bool)_parseFromTLVDataOnFailure;	// IMP=0x0000000000073017
- (_Bool)_parseFromTLVDataOnSuccess;	// IMP=0x0000000000072e9c
- (_Bool)_parseFromTLVData;	// IMP=0x0000000000072d40
- (id)tlvData;	// IMP=0x0000000000072ba4
- (id)initWithSessionIdentifier:(id)arg1 address:(id)arg2 videoSrtpParameters:(id)arg3 audioSrtpParameters:(id)arg4 responseStatus:(unsigned long long)arg5 videoSSRC:(id)arg6 audioSSRC:(id)arg7;	// IMP=0x0000000000072ad5

@end
