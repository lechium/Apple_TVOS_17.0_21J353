//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <coreroutine/NSObject-Protocol.h>

@class NSManagedObjectContext, NSPersistentStore;

@protocol RTPersistenceMirroringDelegate <NSObject>
- (void)performMirroringRequestWithType:(long long)arg1 affectedStore:(NSPersistentStore *)arg2 qualityOfService:(long long)arg3 managedObjectContext:(NSManagedObjectContext *)arg4 handler:(void (^)(_Bool, NSError *))arg5;
- (void)performMirroringRequestWithType:(long long)arg1 affectedStore:(NSPersistentStore *)arg2 qualityOfService:(long long)arg3 handler:(void (^)(_Bool, NSError *))arg4;
@end

