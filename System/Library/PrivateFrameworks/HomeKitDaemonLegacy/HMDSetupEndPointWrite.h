//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

@class HMDEndPointAddress, HMDSRTPParameters, NSData, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDSetupEndPointWrite : HAPTLVBase
{
    NSUUID *_sessionID;	// 8 = 0x8
    HMDEndPointAddress *_address;	// 16 = 0x10
    HMDSRTPParameters *_videoSrtpParameters;	// 24 = 0x18
    HMDSRTPParameters *_audioSrtpParameters;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000072acd
- (void).cxx_destruct;	// IMP=0x0000000000072a7a
@property(readonly, copy, nonatomic) HMDSRTPParameters *audioSrtpParameters; // @synthesize audioSrtpParameters=_audioSrtpParameters;
@property(readonly, copy, nonatomic) HMDSRTPParameters *videoSrtpParameters; // @synthesize videoSrtpParameters=_videoSrtpParameters;
@property(readonly, copy, nonatomic) HMDEndPointAddress *address; // @synthesize address=_address;
@property(readonly, copy, nonatomic) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000072953
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000726c5
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x00000000000724d8
- (_Bool)_parseFromTLVDataOnFailure;	// IMP=0x00000000000723e5
- (_Bool)_parseFromTLVDataOnSuccess;	// IMP=0x00000000000723d3
- (_Bool)_parseFromTLVDataImpl;	// IMP=0x0000000000072109
- (_Bool)_parseFromTLVData;	// IMP=0x00000000000720f7
@property(readonly, copy) NSData *tlvData;
- (id)initWithSessionIdentifier:(id)arg1 address:(id)arg2 videoSrtpParameters:(id)arg3 audioSrtpParameters:(id)arg4;	// IMP=0x0000000000071e50

@end

