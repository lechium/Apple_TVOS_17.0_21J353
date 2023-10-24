//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSNumber, NSString;

@interface AppLedgerItem : NSObject
{
    NSMutableArray *_installs;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
    NSNumber *_itemID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001a1827
@property(readonly, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) NSArray *installs;
- (void)addInstall:(id)arg1;	// IMP=0x00100000001a17df
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00100000001a0f2d
- (id)initWithBundleID:(id)arg1 itemID:(id)arg2;	// IMP=0x00100000001a0e4c

@end
