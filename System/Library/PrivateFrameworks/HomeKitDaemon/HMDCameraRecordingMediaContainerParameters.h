//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

@class NSData, NSNumber;

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingMediaContainerParameters : HAPTLVBase
{
    NSNumber *_fragmentLength;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000006b5e02
- (void).cxx_destruct;	// IMP=0x00000000006b5def
@property(readonly, copy, nonatomic) NSNumber *fragmentLength; // @synthesize fragmentLength=_fragmentLength;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000006b5d6e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000006b5cd6
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x00000000006b5bff
@property(readonly, copy) NSData *tlvData;
- (_Bool)_parseFromTLVData;	// IMP=0x00000000006b5a70
- (id)initWithFragmentLength:(id)arg1;	// IMP=0x00000000006b5a02

@end

