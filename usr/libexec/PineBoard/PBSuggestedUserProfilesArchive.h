//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface PBSuggestedUserProfilesArchive : NSObject
{
    unsigned long long _version;	// 8 = 0x8
    NSDictionary *_suggestedUserProfilesByIdentifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000239f0
+ (_Bool)deleteArchiveAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000023610
+ (id)archiveWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000002331e
- (void).cxx_destruct;	// IMP=0x0020000000023a0c
@property(readonly, nonatomic) NSDictionary *suggestedUserProfilesByIdentifier; // @synthesize suggestedUserProfilesByIdentifier=_suggestedUserProfilesByIdentifier;
@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000023900
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000002371f
- (_Bool)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000002318b
- (id)initWithSuggestedUserProfilesByIdentifier:(id)arg1;	// IMP=0x001000000002308f

@end

