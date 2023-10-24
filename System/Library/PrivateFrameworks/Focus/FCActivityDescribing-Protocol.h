//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Focus/NSCopying-Protocol.h>
#import <Focus/NSObject-Protocol.h>

@class NSArray, NSDate, NSString, NSURL, NSUUID;

@protocol FCActivityDescribing <NSObject, NSCopying>
@property(readonly, nonatomic, getter=isPlaceholder) _Bool placeholder;
@property(readonly, copy, nonatomic) NSURL *activitySetupURL;
@property(readonly, copy, nonatomic) NSURL *activitySettingsURL;
@property(readonly, copy, nonatomic) NSString *activityLifetimesAlternativeDescription;
@property(readonly, copy, nonatomic) NSArray *activityLifetimeDescriptions;
@property(readonly, copy, nonatomic) NSString *activityDetailText;
@property(readonly, copy, nonatomic) NSDate *activityCreationDate;
@property(readonly, copy, nonatomic) NSString *activityColorName;
@property(readonly, copy, nonatomic) NSString *activitySymbolImageName;
@property(readonly, copy, nonatomic) NSString *activityDisplayName;
@property(readonly, nonatomic) long long activitySemanticType;
@property(readonly, copy, nonatomic) NSUUID *activityUniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *activityIdentifier;
@end

