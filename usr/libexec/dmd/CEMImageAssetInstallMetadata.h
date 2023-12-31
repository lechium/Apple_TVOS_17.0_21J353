//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface CEMImageAssetInstallMetadata : NSObject
{
    NSURL *_imageURL;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000005786
- (void).cxx_destruct;	// IMP=0x00200000000058ce
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000005845
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000578e
- (id)dataRepresentation;	// IMP=0x0010000000005723
- (id)urlRepresentation;	// IMP=0x0010000000005711

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

