/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentCredentialProvisioningViewController : PKPaymentSetupProvisioningFieldsViewController {
    unsigned long long  _credentialProvisioningType;
    PKPaymentPass * _localPaymentPass;
    PKPaymentCredentialMetadataTableController * _metadataController;
    UIImage * _passSnapshot;
    PKPaymentCredential * _paymentCredential;
    PKPaymentSetupProduct * _setupProduct;
}

- (void).cxx_destruct;
- (id)_defaultHeaderViewSubTitleForLocalCredential;
- (void)_performEligibilityWithCompletion:(id /* block */)arg1;
- (void)_performFinishWithCompletion:(id /* block */)arg1;
- (void)_performProvisionWithCompletion:(id /* block */)arg1;
- (void)_performRequirementsWithCompletion:(id /* block */)arg1;
- (void)_performTermsWithCompletion:(id /* block */)arg1;
- (id)_remoteIDMSCredentialDefaultHeaderViewSubTitle;
- (void)addDifferentCard:(id)arg1;
- (id)defaultFields;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)downloadPassWithCompletion:(id /* block */)arg1;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 paymentCredential:(id)arg4 setupProduct:(id)arg5;
- (bool)isComplete;
- (void)loadView;
- (id)newPaymentEligibilityRequest;
- (id)newPaymentProvisioningRequest;
- (id)newPaymentRequirementsRequest;
- (void)performNextActionForProvisioningState:(long long)arg1 withCompletion:(id /* block */)arg2;
- (void)preflightCredentialWithCompletion:(id /* block */)arg1;
- (id)readonlyFieldIdentifiers;
- (bool)shouldAppearWithFirstEmptyFieldAsFirstResponder;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (id)visibleFieldIdentifiers;

@end