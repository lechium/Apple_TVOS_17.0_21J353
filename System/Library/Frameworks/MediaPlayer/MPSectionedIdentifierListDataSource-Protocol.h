//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/NSObject-Protocol.h>

@protocol MPMutableIdentifierListSection;

@protocol MPSectionedIdentifierListDataSource <NSObject>
- (void)reloadSection:(id <MPMutableIdentifierListSection>)arg1 completion:(void (^)(NSError *))arg2;
@end

