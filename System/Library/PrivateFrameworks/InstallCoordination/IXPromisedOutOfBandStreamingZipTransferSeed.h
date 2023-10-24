//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSURL;

__attribute__((visibility("hidden")))
@interface IXPromisedOutOfBandStreamingZipTransferSeed
{
    unsigned long long _archiveBytesConsumed;	// 8 = 0x8
    unsigned long long _archiveSizeBytes;	// 16 = 0x10
    NSURL *_extractionPath;	// 24 = 0x18
    NSDictionary *_szOptions;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000044333
- (void).cxx_destruct;	// IMP=0x00000000000444c2
@property(copy, nonatomic) NSDictionary *szOptions; // @synthesize szOptions=_szOptions;
@property(retain, nonatomic) NSURL *extractionPath; // @synthesize extractionPath=_extractionPath;
@property(nonatomic) unsigned long long archiveSizeBytes; // @synthesize archiveSizeBytes=_archiveSizeBytes;
@property(nonatomic) unsigned long long archiveBytesConsumed; // @synthesize archiveBytesConsumed=_archiveBytesConsumed;
- (Class)clientPromiseClass;	// IMP=0x0000000000044426
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004433b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000441c4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004404b

@end

