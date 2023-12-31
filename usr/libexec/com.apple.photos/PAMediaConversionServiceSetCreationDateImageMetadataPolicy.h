//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSTimeZone;

@interface PAMediaConversionServiceSetCreationDateImageMetadataPolicy
{
    NSDate *_creationDate;	// 8 = 0x8
    NSTimeZone *_timeZone;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0040000000003c3c
+ (id)policyWithCreationDate:(id)arg1 inTimeZone:(id)arg2;	// IMP=0x0010000000003b7c
- (void).cxx_destruct;	// IMP=0x0020000000004451
@property(retain) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
- (id)processMetadata:(id)arg1;	// IMP=0x0010000000004170
- (_Bool)metadataNeedsProcessing:(id)arg1;	// IMP=0x0010000000003dde
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000003d30
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000003c44

@end

