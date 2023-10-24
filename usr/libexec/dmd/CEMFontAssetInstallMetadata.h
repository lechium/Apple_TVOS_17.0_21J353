//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface CEMFontAssetInstallMetadata : NSObject
{
    NSURL *_fontURL;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000004c85
- (void);	// IMP=0x0020000000004dcd
@property(copy, nonatomic) NSURL *fontURL; // @synthesize fontURL=_fontURL;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000004d44
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000004c8d
- (id)dataRepresentation;	// IMP=0x0010000000004c22
- (id)urlRepresentation;	// IMP=0x0010000000004c10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
