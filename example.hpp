struct Example {
  const void *getSomething() const;
        void *getSomething();

  [[nodiscard]] void doSomething() const;
};
