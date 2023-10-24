//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/NSObject-Protocol.h>

@class NSIndexSet, PTSection;
@protocol PTModuleComponent;

@protocol PTComponentObserver <NSObject>
- (void)enabledSectionsDidChange:(id <PTModuleComponent>)arg1;
- (void)sectionDidReload:(PTSection *)arg1;
- (void)section:(PTSection *)arg1 didInsertRows:(NSIndexSet *)arg2 deleteRows:(NSIndexSet *)arg3;
@end

