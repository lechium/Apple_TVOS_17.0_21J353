//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/NSObject-Protocol.h>

@class HAPKeychainItem, NSArray, NSNumber, NSString;

@protocol HAPSystemKeychainStore <NSObject>
- (_Bool)deleteKeychainItem:(HAPKeychainItem *)arg1 error:(id *)arg2;
- (_Bool)updateKeychainItem:(HAPKeychainItem *)arg1 createIfNeeded:(_Bool)arg2 error:(id *)arg3;
- (NSArray *)allKeychainItemsForType:(NSNumber *)arg1 identifier:(NSString *)arg2 syncable:(NSNumber *)arg3 error:(id *)arg4;
@end

