//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MRCompanionLinkClientEvent : NSObject
{
    NSString *_eventID;	// 8 = 0x8
    NSDictionary *_userInfo;	// 16 = 0x10
    NSString *_destination;	// 24 = 0x18
    NSString *_uid;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000044997
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;

@end

