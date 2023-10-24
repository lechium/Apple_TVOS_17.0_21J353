//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@protocol FBSSceneObserverConfiguring
- (void)invalidationHandler:(void (^)(FBSScene *))arg1;
- (void)actionHandler:(NSSet * (^)(FBSScene *, NSSet *))arg1;
- (void)clientUpdateHandler:(void (^)(FBSScene *, FBSSceneUpdate *))arg1;
- (void)updateHandler:(void (^)(FBSScene *, FBSSceneUpdate *))arg1;
- (void)actionClasses:(NSArray *)arg1;
- (void)clientSettingNames:(NSArray *)arg1;
- (void)settingNames:(NSArray *)arg1;
- (void)actions:(Class)arg1;
- (void)clientSettings:(SEL)arg1;
- (void)settings:(SEL)arg1;
@end

