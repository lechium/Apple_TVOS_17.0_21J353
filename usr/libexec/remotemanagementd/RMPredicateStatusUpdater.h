//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPersistentContainer;

@interface RMPredicateStatusUpdater : NSObject
{
    NSPersistentContainer *_persistentContainer;	// 8 = 0x8
}

+ (id)sharedUpdater;	// IMP=0x002000000006b153
- (void).cxx_destruct;	// IMP=0x002000000006b8cf
@property(retain, nonatomic) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
- (_Bool)_updatePredicateStatusWithFetchPredicate:(id)arg1;	// IMP=0x001000000006b395
- (_Bool)notifyPredicateStatusDidChangeForManagementSourceIdentifier:(id)arg1;	// IMP=0x001000000006b27e
- (id)initWithPersistentContainer:(id)arg1;	// IMP=0x001000000006b213

@end

