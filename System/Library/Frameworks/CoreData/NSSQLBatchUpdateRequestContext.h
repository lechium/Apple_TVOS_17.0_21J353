//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSBatchUpdateRequest, NSFetchRequest, NSSQLiteStatement;

__attribute__((visibility("hidden")))
@interface NSSQLBatchUpdateRequestContext
{
    NSSQLiteStatement *_updateStatement;	// 96 = 0x60
    NSFetchRequest *_fetchRequest;	// 104 = 0x68
}

- (_Bool)executeRequestCore:(id *)arg1;	// IMP=0x00000000001687a9
- (void)executePrologue;	// IMP=0x00000000001686e4
- (_Bool)isWritingRequest;	// IMP=0x00000000001686dc
- (id)createFetchRequestContextForObjectsToUpdate;	// IMP=0x0000000000168561
@property(readonly, nonatomic) NSBatchUpdateRequest *request;
- (void)dealloc;	// IMP=0x00000000001684c7
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;	// IMP=0x0000000000168467

@end

