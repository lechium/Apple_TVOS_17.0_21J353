//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDictionary, NSString;
@protocol APSUser;

@protocol APSTopicSaltStore
- (NSDictionary *)loadIdentifiersToSaltsForUser:(id <APSUser>)arg1;
- (_Bool)saveSalt:(NSData *)arg1 forIdentifier:(NSString *)arg2 user:(id <APSUser>)arg3;
- (NSData *)loadSaltForIdentifier:(NSString *)arg1 user:(id <APSUser>)arg2;
@end
