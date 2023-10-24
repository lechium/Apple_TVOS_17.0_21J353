//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GTBulkDataTransferOptions : NSObject
{
    unsigned long long _chunkSize;	// 8 = 0x8
    long long _compressionAlgorithm;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000007ddc
@property(nonatomic) long long compressionAlgorithm; // @synthesize compressionAlgorithm=_compressionAlgorithm;
@property(nonatomic) unsigned long long chunkSize; // @synthesize chunkSize=_chunkSize;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000007f29
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000007eb8
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000007e28
- (id)init;	// IMP=0x0010000000007de4

@end

