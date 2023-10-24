//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSManagedObjectContext, NSPersistentHistoryToken;

__attribute__((visibility("hidden")))
@interface PFCloudKitHistoryAnalyzer
{
    NSManagedObjectContext *_managedObjectContext;	// 16 = 0x10
    NSPersistentHistoryToken *_lastProcessedToken;	// 24 = 0x18
}

+ (_Bool)isPrivateContextName:(id)arg1;	// IMP=0x006000000016841b
+ (_Bool)isPrivateTransactionAuthor:(id)arg1;	// IMP=0x0060000000168367
+ (_Bool)isPrivateTransaction:(id)arg1;	// IMP=0x00600000001682ee
- (_Bool)processTransaction:(id)arg1 withContext:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000167f94
- (id)instantiateNewAnalyzerContextForChangesInStore:(id)arg1;	// IMP=0x0000000000167f4c
- (void)dealloc;	// IMP=0x0000000000167ee8
- (id)initWithOptions:(id)arg1 managedObjectContext:(id)arg2;	// IMP=0x0000000000167db5

@end
