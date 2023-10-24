//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesCloud/NSObject-Protocol.h>

@class ICMusicUserState, ICTVUserState, NSArray, NSNumber, NSString;

@protocol ICMutableMediaUserState <NSObject>
@property(retain, nonatomic) ICTVUserState *tv;
@property(retain, nonatomic) ICMusicUserState *music;
@property(nonatomic) _Bool ageVerificationRequired;
@property(copy, nonatomic) NSString *username;
@property(copy, nonatomic) NSString *lastName;
@property(copy, nonatomic) NSString *firstName;
@property(copy, nonatomic) NSString *countryCode;
@property(copy, nonatomic) NSString *storefrontIdentifier;
@property(copy, nonatomic) NSArray *homeUserIDs;
@property(copy, nonatomic) NSString *iCloudPersonID;
@property(copy, nonatomic) NSString *alternateDSID;
@property(copy, nonatomic) NSNumber *dsid;
@property(nonatomic) _Bool isActive;
@property(copy, nonatomic) NSString *shortDebugName;
@property(copy, nonatomic) NSString *identifier;
@end

