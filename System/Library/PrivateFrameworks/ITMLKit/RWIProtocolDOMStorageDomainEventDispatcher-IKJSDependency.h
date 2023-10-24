//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebInspector/RWIProtocolDOMStorageDomainEventDispatcher.h>

@interface RWIProtocolDOMStorageDomainEventDispatcher (IKJSDependency)
- (void)safe_domStorageItemAddedWithStorageId:(id)arg1 key:(id)arg2 newValue:(id)arg3;	// IMP=0x00600000000cd098
- (void)safe_domStorageItemRemovedWithStorageId:(id)arg1 key:(id)arg2;	// IMP=0x00600000000ccf8b
- (void)safe_domStorageItemUpdatedWithStorageId:(id)arg1 key:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4;	// IMP=0x00600000000cce39
- (void)safe_domStorageItemsClearedWithStorageId:(id)arg1;	// IMP=0x00600000000ccd4f
@end

